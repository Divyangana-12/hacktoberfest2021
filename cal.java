public class cal {
    public static void main(String[] args) {
        int n1 = Integer.parseInt(args[0]);
        int n2 = Integer.parseInt(args[1]);
        switch(args[2])
        {
            case "+" :
                System.out.println(n1+" "+args[2]+" "+n2+" = "+(n1+n2));
                break;
            case "-" :
                System.out.println(n1+" "+args[2]+" "+n2+" = "+(n1-n2));
                break;
            case "*" :
                System.out.println(n1+" "+args[2]+" "+ n2+ " = "+ (n1*n2));
                break;
            case "/" :
                System.out.println(n1+" "+args[2]+" "+ n2+ " = "+ (n1/n2));
                break;
            default:
                System.out.println("enter valid operater");
        }
    }
}
