using System;
using WpfAppTest;

namespace xcsProj
{
    public partial class KStartClass
    {
        public int SuperAddition(int a, int b)
        {
            return a + a + b;
        }

        [STAThread]
        static void Main()
        {
            //WpfTest app = new WpfTest();
            //app.Start();
            //int i = app.GetInt();

            MainWin app2 = new MainWin();
            app2.Start();

        }
    }
}
