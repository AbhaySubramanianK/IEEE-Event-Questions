// Find errors in the following code AND write their outputs.

// 1
class PassA 
{
    public static void main(String [] args) 
    {
        PassA p = new PassA();
        p.start();
    }

    void start() 
    {
        long [] a1 = {3,4,5};
        long [] a2 = fix(a1);
        System.out.print(a1[0] + a1[1] + a1[2] + " ");
        System.out.println(a2[0] + a2[1] + a2[2]);
    }

    long [] fix(long [] a3) 
    {
        a3[1] = 7;
        return a3;
    }
}



// 2
class Test 
{
    public static void main(String [] args) 
    {
        Test p = new Test();
        p.start();
    }

    void start() 
    {
        boolean b1 = false;
        boolean b2 = fix(b1);
        System.out.println(b1 + " " + b2);
    }

    boolean fix(boolean b1) 
    {
        b1 = true;
        return b1;
    }
}


// 3
class PassS 
{
    public static void main(String [] args) 
    {
        PassS p = new PassS();
        p.start();
    }

    void start() 
    {
        String s1 = "slip";
        String s2 = fix(s1);
        System.out.println(s1 + " " + s2);
    }

    String fix(String s1) 
    {
        s1 = s1 + "stream";
        System.out.print(s1 + " ");
        return "stream";
    }
}

// 4
class BitShift 
{
    public static void main(String [] args) 
    {
        int x = 0x80000000;
        System.out.print(x + " and  ");
        x = x >>> 31;
        System.out.println(x);
    }
}


// 5
class Equals 
{
    public static void main(String [] args) 
    {
        int x = 100;
        double y = 100.1;
        boolean b = (x = y); /* Line 7 */
        System.out.println(b);
    }
}

// 6
class Test 
{
    public static void main(String [] args) 
    {
        int x=20;
        String sup = (x < 15) ? "small" : (x < 22)? "tiny" : "huge";
        System.out.println(sup);
    }
}


// 7
class Test 
{
    public static void main(String [] args) 
    {
        int x= 0;
        int y= 0;
        for (int z = 0; z < 5; z++) 
        {
            if (( ++x > 2 ) && (++y > 2)) 
            {
                x++;
            }
        }
        System.out.println(x + " " + y);
    }
}

// 8
class Test 
{
    public static void main(String [] args) 
    {
        int x= 0;
        int y= 0;
        for (int z = 0; z < 5; z++) 
        {
            if (( ++x > 2 ) || (++y > 2)) 
            {
                x++;
            }
        }
    System.out.println(x + " " + y);
    }
}

// 9
class Bitwise 
{
    public static void main(String [] args) 
    {
        int x = 11 & 9;
        int y = x ^ 3;
        System.out.println( y | 12 );
    }
}

// 10
class SSBool 
{
    public static void main(String [] args) 
    {
        boolean b1 = true;
        boolean b2 = false;
        boolean b3 = true;
        if ( b1 & b2 | b2 & b3 | b2 ) /* Line 8 */
            System.out.print("ok ");
        if ( b1 & b2 | b2 & b3 | b2 | b1 ) /*Line 10*/
            System.out.println("dokey");
    }
}

