/*

Shreyansh and his bits ( 25 Nov 2022 )
https://practice.geeksforgeeks.org/problems/shreyansh-and-his-bits1420/1

- - -

but my logic will take greater also
so half only solved
first logic to solve under TLE which came in my mind

*/

class Solution
{
public:
	long long count(long long num)
	{
		int no1 = 0; // no of ones
		int no0 = 0; // no of zeros
		int _0or1;

		do
		{
			_0or1 = (num & 1);
			_0or1 ? no1++ : no0++; // ( num % 2 )

			// cout << _0or1 << " - " << num;
			// NEWLINE;

		} while (num >>= 1); // (num /= 2)

		// NEWLINE;

		// cout << "no 0 :- " << no0;
		// NEWLINE;
		// cout << "no 1 :- " << no1;

		if (no0 == 0 || no1 == 0)
			return 0;

		int nob = no0 + no1; // no of bits
		// cout << "nob:" << nob;
		// NEWLINE;
		// cout << "no1:" << no1;
		// NEWLINE;
		// cout << "no0:" << no0;
		// NEWLINE;

		// my logic will take greater also - from here
		// but no1 == 1 .. will work fine
		if (no0 == 1 || no1 == 1)
			return nob - 1;

		// for greater than 2
		return (((no1 + 2) * (no1 + 1)) / 2) - 1;
	}
};
