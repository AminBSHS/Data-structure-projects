using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace project_1_3
{
    class Program
    {
        static void Main(string[] args)
        {

            int r, p;
            int output;

            r = Convert.ToInt32(Console.ReadLine());
            p = Convert.ToInt32(Console.ReadLine());
            output=power(r, p);
            Console.WriteLine(output);
            Console.ReadKey();
        }
        static int power(int r,int p)
        {
            int f = r;

            if(p==1)
            {
                return r;
            }
            r = power(r, p - 1);
            r *= f;
            return r;
        }
    }
}
