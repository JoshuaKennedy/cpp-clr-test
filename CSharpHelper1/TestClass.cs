using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Windows.Forms;

namespace CSharpHelper1
{
    public class TestClass
    {
        public TestClass()
        {
            Console.WriteLine("\nTestClass from " + Assembly.GetExecutingAssembly() + " has been instantiated!");
        }

        public void CallMe()
        {
            Type type = Type.GetType("CSharpHelper1.TestClass");
            MethodInfo mi = type.GetMethod("CallMe");
            string isPublic = (mi.IsPublic ? "public " : "private ");
            string methodSig = isPublic + mi.ReturnType + ' ' + typeof(TestClass).Name + "::" + mi.Name + "()";

            MessageBox.Show("Hey you just ran me, and this is crazy. So here's my method signature, and call me maybe?! ;-)" + "\n\nMethod signature: " + methodSig + "\n\nP.S.: Hello from C#!", "MessageBox from TestClass", MessageBoxButtons.OK, MessageBoxIcon.Question);
        }
    }
}
