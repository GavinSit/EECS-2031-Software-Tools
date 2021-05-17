/***************************************
* EECS2031 – Lab1 *
* Author: Sit, Gavin *
* Email: gavinsit@my.yorku.ca *
* eecs_username: gavinsit *
* York Student #: 215043870
****************************************/
import java.util.Scanner;
public class lab1A0 {

 public static void main(String[] args) {
 
  Scanner scan = new Scanner(System.in); // or use bufferedReaders or Console 
  System.out.print("Please enter the name: ");
  String name = scan.next();

  System.out.print("Please enter the number: ");
  int a = scan.nextInt();

  int b = a * 2;
  int c = a*3; 
  
  System.out.println("Hi " + name + ", double and triple of the input " + a + " is " + b + " and " + c + " respectively");       
  System.out.printf("Hi " + name + ", double and triple of the input " + a + " is " + b + " and " + c + " respectively");

 }   
}

