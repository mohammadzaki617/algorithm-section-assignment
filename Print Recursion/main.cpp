void printf(int n)
{
    if(n<1)
    return;
    else
    cout<<"I love recursion""<<endl;
    printf(n-1);
}
int main()
{
    printf(5);
    return 0;
}
