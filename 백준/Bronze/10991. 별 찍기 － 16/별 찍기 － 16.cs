
using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < n - y - 1; x++)
            {
                Console.Write(" ");
            }
            for (int x = 0; x < (y + 1) * 2 - 1; x++)
            {
                if (x % 2 == 0)
                    Console.Write("*");
                else
                    Console.Write(" ");
            }
            Console.WriteLine();
        }
    }
}