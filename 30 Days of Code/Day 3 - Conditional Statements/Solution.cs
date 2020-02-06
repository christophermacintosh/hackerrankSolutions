using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Solution
{
    static bool Isnumeven(int N)
    {
        if (N % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    static void PrintWeird()
    {
        Console.WriteLine("Weird");
    }

    static void PrintNotWeird()
    {
        Console.WriteLine("Not Weird");
    }

    static void Main(string[] args)
    {
        int N = Convert.ToInt32(Console.ReadLine());



        if (Isnumeven(N))
        {
            if (N <= 5 && N >= 2)
            {
                PrintNotWeird();
            }
            else if (N >= 6 && N <= 20)
            {
                PrintWeird();
            }
            else if (N >= 20)
            {
                PrintNotWeird();
            }
        }
        else
        {
            PrintWeird();
        }
    }
}