int sumTriangularNumbers(int n)
{
  int sum =0;
  if(n<=0){
    sum = 0;
  }
  else{
   
    for(int i=1;i<=n;i++)
    {
      sum += (i*i + i)/2;
    }
   }
  return sum;
}