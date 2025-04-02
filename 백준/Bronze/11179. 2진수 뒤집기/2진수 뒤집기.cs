
using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        string bit = Convert.ToString(n, 2);
        string reverseBit = "";
        for (int i = bit.Length - 1; i >= 0; i--)
            reverseBit += bit[i];
        Console.WriteLine(Convert.ToInt32(reverseBit, 2));
    }
}