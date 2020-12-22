 

void funcA();
void funcB();

void *thread()
{
	__transaction_relaxed
	{
		funcA();
	};
	funcB();
}

