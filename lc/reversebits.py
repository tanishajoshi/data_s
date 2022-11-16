"""

Reverse bits of a given 32 bits unsigned integer

eg: Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
"""


class Solution:
    def reverseBits(self, n: int) -> int:
        return int('{:032b}'.format(n)[::-1],2)


