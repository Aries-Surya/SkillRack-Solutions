import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        for(int i=0;i<input.length();i++){
            for(int j=i+1;j<input.length();j++){
                if(input.charAt(i) == input.charAt(j)) {
                    System.out.println(input.charAt(i));
                    return;
                }
            }
        }
	}
}