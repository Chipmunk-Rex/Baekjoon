
    using System.Numerics;
using System.Runtime.ExceptionServices;

internal class Program
{
     static void Main(string[] args)
     {
         int n = int.Parse(Console.ReadLine());
        int xMax = n * 2 - 1;
         for (int y = 0; y < n; y++)
         {
            for(int x = 0; x < xMax; x++)
            {
                if( x >= xMax - y)
                    break;
                if (x < y)
                    Console.Write(" ");
                else
                    Console.Write("*");
            }
            Console.WriteLine();
         }
     }   
}