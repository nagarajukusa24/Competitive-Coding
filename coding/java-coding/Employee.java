public class Employee {
    // void salary(int salary)
    // {
    //     int salary;
    //     this.salary = salary;
    // }
    int salary = 1000;
}
class Programmer extends Employee{
    int bonus = 4000;
    public void main(final String[] args) {
        // Employee e = new Employee();
        final Programmer p = new Programmer();
       // e.salary(1000);
        System.out.println("Salary is:" + p.salary);
        System.out.println("Bonus is:" + p.bonus);
    }
}