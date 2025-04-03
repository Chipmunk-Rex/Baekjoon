using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        string[] arr = Console.ReadLine().Split(' ');
        BigInteger n = BigInteger.Parse(arr[0]);
        BigInteger m = BigInteger.Parse(arr[1]);
        Console.WriteLine(n / m);
        Console.WriteLine(n % m);
    }
}
