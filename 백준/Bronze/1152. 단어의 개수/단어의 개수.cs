using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            int count = 0;
            foreach (string input in inputs)
            {
                if (input != "")
                {
                    count++;
                }

            }
            Console.WriteLine(count);
        }
    }
}
