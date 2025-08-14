using BenchmarkDotNet.Attributes;
using BenchmarkDotNet.Running;
using MemoryPack;
using System.Text.Json;

[MemoryPackable]
public partial class Person
{
    public string Name { get; set; }
    public int Age { get; set; }
}

public class Benchmarks
{
    private Person person;
    private byte[] memoryPackBytes;
    private byte[] jsonBytes;
    public Benchmarks()
    {
        person = new Person {  Name = "John Doe", Age = 18 };
        memoryPackBytes = MemoryPackSerializer.Serialize(person);
        jsonBytes = JsonSerializer.SerializeToUtf8Bytes(person);
    }
    [Benchmark]
    public byte[] Serialize_MemoryPack()
        => MemoryPackSerializer.Serialize(person);

    [Benchmark]
    public byte[] Serialize_SystemTextJson()
        => JsonSerializer.SerializeToUtf8Bytes(person);

    [Benchmark]
    public Person? Deserialize_MemoryPack()
        => MemoryPackSerializer.Deserialize<Person>(memoryPackBytes);

    [Benchmark]
    public Person? Deserialize_SystemTextJson()
        => JsonSerializer.Deserialize<Person>(jsonBytes);
}

abstract class Program
{
    static void Main(string[] args)
    {
        BenchmarkSwitcher.FromAssembly(typeof(Program).Assembly)
            .Run(args, new BenchmarkDotNet.Configs.DebugInProcessConfig());
    }
}
