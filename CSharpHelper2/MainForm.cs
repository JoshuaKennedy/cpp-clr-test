using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Windows.Forms;

using CppHelper1;

namespace CSharpHelper2
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        [DllImport("CppHelper1.dll")]
        private static extern void OpenMyWebsite(IntPtr hostWindowHandle);

        [DllImport("CppHelper1.dll")]
        private static extern void ShowTestInformation(IntPtr hostWindowHandle);

        [DllImport("CppHelper1.dll")]
        private static extern void PInvokeTest();

        private void infoButton_Click(object sender, EventArgs e)
        {
            ShowTestInformation(this.Handle);
        }

        private void websiteLinkLabel_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            OpenMyWebsite(this.Handle);
        }

        private void actionButton_Click(object sender, EventArgs e)
        {
            randomTextLabel.Text = Class1.GetRandomMessage();
        }

        private void pinvokeButton_Click(object sender, EventArgs e)
        {
            PInvokeTest();
            this.Focus();
        }
    }
}
