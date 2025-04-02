using System.Numerics;

internal class Program
{
    static void Main(string[] args)
    {
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        int sum = 0;
        for (int i = 0; i < arr.Length; i++)
        {
            sum += arr[i] * arr[i];
        }
        Console.WriteLine(sum % 10);
    }
}
