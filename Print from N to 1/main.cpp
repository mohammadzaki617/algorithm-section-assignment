void printfunction(int n)
{
    if(n==0)
    return;
    else
    cout<<n<<endl;
    printfunction(n-1);
}
int main()
{
int n;
cin>>n;
printfunction(n);
    return 0;
}
