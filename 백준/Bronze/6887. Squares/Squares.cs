
using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int input = int.Parse(Console.ReadLine());

            Console.WriteLine("The largest square has side length " + (int)(MathF.Sqrt(input)) / 1 + ".");
    }
}