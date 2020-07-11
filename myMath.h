

/**************************************
b is base
e is exponent
This function will return the answer of b^e
**************************************/
int pow(int b, int e)
{
  int ans = 1;
  for(int i =1; i <= e; i++)
    ans *= b;
  return ans;
}

/**********************************************
n is the number positive or negative or zero
This function will return the absolute value of n 
*******************************/
double fabs(double n)
{
  if(n < 0)
    n *= -1;
  return n;
}

/******************************************
num is the number with decimal
this function will return num to the nearset integer
*********************************/

int round(double num)
{
  if(num >= 0)
  num = num + 0.5;
  else
    {
      num = num - 0.5;
    }
 return num; 
}

/******************************************************

*******************************************************/
bool isPrime(int num)
{
  if(num > 2 && num %2 == 0)
    {
      return false;
    }
  for(int i=3;i<=num/2;i++)
    {
      if(num%i==0)
	{
	  return false;
	}
    }
  return true;
}
