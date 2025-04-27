

    using System.Numerics;
using System.Runtime.ExceptionServices;

internal class Program
{
     static void Main(string[] args)
     {
         int n = int.Parse(Console.ReadLine());
         int max = n * 2 - 1;
        for (int y = 0; y < max; y++)
        {
            for (int x = 0; x < max; x++)
            {
                if (x >= n + y - (((y % n + 1) * (y / n) * 2)))
                    break;
                if (x < n - y - 1 + (((y % n + 1) * (y / n)) * 2))
                    Console.Write(" ");
                else
                    Console.Write("*");
            }
            Console.WriteLine();
         }
     }   
}