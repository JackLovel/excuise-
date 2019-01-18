package com.chapter1;

import java.util.Random;

/**
 * @author wcc
 * @version 1.1
 * @see com.chapter1.StaticTest
 */
public class ConstructorTest {
    public static void main(String[] args) {
        Employee4[] staff = new Employee4[3];

        staff[0] = new Employee4("Harry", 40000);
        staff[1] = new Employee4(60000);
        staff[2] = new Employee4();

        // print out information about all
        for (Employee4 e : staff)
            System.out.println("name=" + e.getName() + ",id=" + e.getId() + ",salary="
                    + e.getSalary());
    }
}

class Employee4 {
    private static int nextId;

    private int id;
    private String name = "";
    private double salary;

    static {
        Random generator = new Random();
        nextId = generator.nextInt(1000);
    }

    {
        id = nextId;
        nextId++;
    }

    // three overloaded constructors
    public Employee4(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public Employee4(double s) {
        // calls the Employee(String, double) constructor
        this("Employee #" + nextId, s);
    }

    public Employee4() {
        // the default constructor

    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    public int getId() {
        return id;
    }
}
