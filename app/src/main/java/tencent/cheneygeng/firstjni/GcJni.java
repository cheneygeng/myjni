package tencent.cheneygeng.firstjni;

/**
 * Created by cheneygeng on 2015/10/29.
 */
public class GcJni {
   public native String getString();
    static {
        System.loadLibrary("hellogc");
    }
}
