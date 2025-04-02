
using System.Numerics;

internal class Program
{
    static bool[,] grid;
    static bool CheckRow(int index, int n)
    {

        bool prev = false;
        int sameCount = -1;
        int wCount = 0; ;
        for (int y = 0; y < n; y++)
        {
            bool current = grid[y, index];
            if (current)
                wCount++;
            if (false == (prev ^ current))
            {
                sameCount++;
                if (sameCount >= 2)
                {
                    return false;
                }
            }
            else
                sameCount = 0;
            prev = current;
        }
        return wCount == n / 2;
    }
    static bool CheckColum(int index, int n)
    {
        bool prev = false;
        int sameCount = -1;
        int wCount = 0; ;
        for (int x = 0; x < n; x++)
        {
            bool current = grid[index, x];
            if (current)
                wCount++;
            if (false == (prev ^ current))
            {
                sameCount++;
                if(sameCount >= 2)
                {
                    return false;
                }
            }
            else
                sameCount = 0;
            prev = current;
        }
        return wCount == n / 2;
    }
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        if(n %2 == 1)
        {
            Console.WriteLine("0");
            return;
        }

        grid = new bool[n, n];
        for (int y = 0; y < n; y++)
        {
            string input = Console.ReadLine();
            for (int x = 0; x < n; x++)
            {
                if (input[x] == 'W')
                    grid[x, y] = true;
                else
                    grid[x, y] = false;
            }
        }


        for (int y = 0; y < n; y++)
        {
            if (!CheckColum(y, n))
            {
                Console.WriteLine("0");
                return;
            }
        }

        for (int x = 0; x < n; x++)
        {
            if(!CheckRow(x, n))
            {
                Console.WriteLine("0");
                return;
            }
        }

        Console.WriteLine("1");
    }
}