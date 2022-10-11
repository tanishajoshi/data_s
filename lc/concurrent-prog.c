/**

trying to understand how producer/consumer threads work 

in order to design a distributed messaging queue for eg.

pthread_cond_t less -> thread condition for producer 

more--> thread cond for consumer


*/
typedef struct {
	char buf[BSIZE]
	int occupied;
	int nextin;
	int nextout;
	pthread_mutex_t mutex;
	pthread_cond_t more;
	pthread_cond_t less;
}


//producer thread 

void prod(buffer_t *b, char item) {
	pthread_mutex_lock(&b->mutex);
	while(b->occupied >= BSIZE)
					pthread_cond_wait(&b->less, &b->mutex);
	assert(b->occupied< BSIZE);
	b->buf[b->nextin++] = item;
	b->nextin %= BSIZE;
	b->occupied++;

	pthread_cond_signal(&b->more);
	pthread_mutex_unlock(&b->mutex);


}

char consumer(buffer_t *b) {
	char item;
	pthread_mutex_lock(&b->mutex);
	while(b->occupied <=0)
					pthread_cond_wait(&b->more, &b->mutex);
	assert(b->occupied>0);

	item = b->buf[b->nextout++];
	b->nextout%= BSIZE;
	b-> occupied--;

	pthread_cond_signal(&b->less);
	pthread_mutex_unlock(&b->mutex);

	return(item);

}
