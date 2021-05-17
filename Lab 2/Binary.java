import java.util.Scanner;

class  Binary
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner (System.in);
		
		int data;
		System.out.print("Enter an integer in decimal: ");

		while ( (data = scan.nextInt()) != -10000)
		{
		  String binaryS = Integer.toBinaryString(data);
		  
		  String s = String.format("%32s", binaryS).replace(' ', '0'); // padding 0s to the left
		  System.out.println(s);
		  System.out.printf("Oct:%#o  Hex:%#x\n", data,data);
		  System.out.print("Enter a int in decimal: ");


		}

	}
}
