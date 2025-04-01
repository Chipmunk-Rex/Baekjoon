

using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        BigInteger A = BigInteger.Parse(Console.ReadLine());
        BigInteger B = BigInteger.Parse(Console.ReadLine());

        Console.WriteLine(A + B);
        Console.WriteLine(A - B);
        Console.WriteLine(A * B);

    }
}