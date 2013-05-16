using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace CSharpHelper1
{
    public partial class TestControl : UserControl
    {
        public TestControl()
        {
            InitializeComponent();
        }

        private void TestControl_Load(object sender, EventArgs e)
        {
            labelColorTimer.Start();
        }

        private void labelColorTimer_Tick(object sender, EventArgs e)
        {
            if (meGustaLabel.ForeColor == Color.Red)
                meGustaLabel.ForeColor = Color.LightGray;
            else if (meGustaLabel.ForeColor == Color.LightGray)
                meGustaLabel.ForeColor = Color.Green;
            else if (meGustaLabel.ForeColor == Color.Green)
                meGustaLabel.ForeColor = Color.Red;
        }
    }
}
