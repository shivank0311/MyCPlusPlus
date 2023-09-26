void funct()
{
    int a=100;
   static int b=0;
    b++;
    cout<<a<<endl;
    cout<<b<<endl;

}
int main()   //command line arguments
{

    funct();
    funct();
    funct();
}