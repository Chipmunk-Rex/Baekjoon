

using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        if (n % 7 == 2)
            Console.WriteLine("1");
        else
            Console.WriteLine("0");
    }
}