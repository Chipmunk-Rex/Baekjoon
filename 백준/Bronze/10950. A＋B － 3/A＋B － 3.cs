
using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        for(int i = 0; i < t; i++)
        {
            TestCase();
        }
    }

    private static void TestCase()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int a = int.Parse(inputs[0]);
        int b = int.Parse(inputs[1]);
        Console.WriteLine(a + b);
    }
}