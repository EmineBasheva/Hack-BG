vector<int> primes;

void prime(int n)
{
	bool x;
    for (int i = 2; i < n; i++)
	{
        x = true;
        for (int j = 2; j < i; j++)
		{
            if (i%j == 0)
			{
                x = false;
                break;
            }
        }
        if (x)
		{
			primes.push_back(i);
        }
    }
}


void goldbach(int n)
{
	prime(n);
	for(int i = 0; i < primes.size() - 1; i++)
	{
		for(int j = i + 1; j < primes.size(); j++)
		{
			if(primes[i] + primes[j] == n)
			{
				cout<<"("<<primes[i]<<", "<<primes[j]<<")"<<" ";
			}
		}
	}
	cout<<endl;
}
