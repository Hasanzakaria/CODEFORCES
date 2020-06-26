import java.util.*;
public class Mian {

	public static void main(String[] args) {
		
		Integer n,l,r;
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		l=sc.nextInt();
		r=sc.nextInt();
		Integer[] a=new Integer[n+1];
		Integer[] b=new Integer[n+1];
		
		
		
		for(Integer i=1;i<=n;i++)a[i]=sc.nextInt();
		for(Integer i=1;i<=n;i++)b[i]=sc.nextInt();
		
		
	//	for(Integer i=0;i<n;i++)System.out.println(a[i]);
	//	for(Integer i=0;i<n;i++)System.out.println(b[i]);
		
		
		
		Map<Integer, Integer> map = new HashMap<Integer, Integer>();
		for(Integer i=(l);i<=(r);i++) {
			//a[i]=sc.nextInt();
		    Integer gg = map.get(a[i]);
		    if(gg == null) map.put(a[i], 1);
		    else map.put(a[i], gg + 1);
		} 
		
		
		
		Map<Integer, Integer> Bap = new HashMap<Integer, Integer>();
		for(Integer i=(l);i<=(r);i++) {
			//b[i]=sc.nextInt();
		    Integer gg = Bap.get(b[i]);
		    if(gg == null) Bap.put(b[i], 1);
		    else Bap.put(b[i], gg + 1);
		} 
		Integer flag=0;
		for(int i=1;i<l;i++)
		{
			if(a[i]!=b[i])flag=1;
		}
		for(int i=r+1;i<=n;i++)
		{
			if(a[i]!=b[i])flag=1;
		}
		
		
		for(Integer i=l;i<=(r);i++)
		{	
			Integer x=a[i];
			Integer ans1=map.get(x);
			Integer ans2=Bap.get(x);
			if(ans1==null)ans1=0;
			if(ans2==null)ans2=0;
			if(ans1!=ans2)
			{
				flag=1;
				break;
			}
			//System.out.println(x+" "+ans1+" "+ans2);
		}
		if(flag==0)System.out.println("TRUTH");
		if(flag==1)System.out.println("LIE");
		map.clear();
		Bap.clear();
	}

}