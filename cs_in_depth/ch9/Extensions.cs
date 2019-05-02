using System;
using System.Collections;

static class Extensions
{
    public static Dummy<T> Where<T>(this Dummy<T> dummy,
                                  Func<T,bool> predicate)
    {
        Console.WriteLine("Where called");
        return dummy;
    }
}

class Dummy<T>
{
    public Dummy<U> Select<U>(Func<T,U> selector) 
    {
        Console.WriteLine("Select called");
        return new Dummy<U>();
    }
}

class TranslationExample
{
    static void Main()
    {
        var source = new Dummy<string>();
        var query = from dummy in source      //❸ 创建用于查询的数据源
                    where dummy.ToString() == "Ignored"    //❹通过查询表达式来调用方法
                    select "Anything";
}
}