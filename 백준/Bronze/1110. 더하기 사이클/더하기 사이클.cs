

using System.Numerics;

internal class Program
{
    static int Calc(int n)
    {
        int a = (n / 10);
        int b = (n % 10);
        return b * 10 + (a + b) % 10;
    }
    static void Main(string[] args) 
    {
        int n = int.Parse(Console.ReadLine());
        bool isSame = false;
        int startN = n;
        int count =0 ;
        while(isSame == false)
        {
            n = Calc(n);
            count++;
            if (startN == n)
                break;
        }
        Console.WriteLine(count);
    }
}