

    using System.Numerics;

    internal class Program
    {
        static void Main(string[] args)
        {
            string[] inputs = Console.ReadLine().Split(' ');
        int a = int.Parse(inputs[0]);
        int b = int.Parse(inputs[1]);

            Console.WriteLine(b / 2 + b % 2 > a ? "H" : "E");
        }
    }