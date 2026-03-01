void printfunction(int n)
{
    if(n==0)
    return;
    else
    printfunction(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    printfunction(n);
    return 0;
}
