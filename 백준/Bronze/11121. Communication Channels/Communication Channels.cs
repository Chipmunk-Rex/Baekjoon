

using System.Numerics;

internal class Program
{
    static int Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());

        string[] inputs = { };
        for (int i = 0; i < n; i++)
            inputs = inputs.Concat(Console.ReadLine().Split(' ')).ToArray();


        for (int i = 0; i < n; i++)
        {
            if (inputs[i * 2] == inputs[i * 2 + 1])
                Console.WriteLine("OK");
            else
                Console.WriteLine("ERROR");
        }
        return 0;
    }
}