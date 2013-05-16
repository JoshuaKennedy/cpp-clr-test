namespace CSharpHelper1
{
    partial class TestControl
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.meGustaPictureBox = new System.Windows.Forms.PictureBox();
            this.meGustaLabel = new System.Windows.Forms.Label();
            this.labelColorTimer = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.meGustaPictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // meGustaPictureBox
            // 
            this.meGustaPictureBox.Image = global::CSharpHelper1.Properties.Resources.me_gusta_5117_preview;
            this.meGustaPictureBox.Location = new System.Drawing.Point(52, 85);
            this.meGustaPictureBox.Name = "meGustaPictureBox";
            this.meGustaPictureBox.Size = new System.Drawing.Size(159, 138);
            this.meGustaPictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.meGustaPictureBox.TabIndex = 0;
            this.meGustaPictureBox.TabStop = false;
            // 
            // meGustaLabel
            // 
            this.meGustaLabel.AutoSize = true;
            this.meGustaLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.meGustaLabel.ForeColor = System.Drawing.Color.Red;
            this.meGustaLabel.Location = new System.Drawing.Point(54, 34);
            this.meGustaLabel.Name = "meGustaLabel";
            this.meGustaLabel.Size = new System.Drawing.Size(157, 20);
            this.meGustaLabel.TabIndex = 1;
            this.meGustaLabel.Text = "Me Gusta C++/CLI";
            // 
            // labelColorTimer
            // 
            this.labelColorTimer.Tick += new System.EventHandler(this.labelColorTimer_Tick);
            // 
            // TestControl
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Controls.Add(this.meGustaLabel);
            this.Controls.Add(this.meGustaPictureBox);
            this.Name = "TestControl";
            this.Size = new System.Drawing.Size(268, 250);
            this.Load += new System.EventHandler(this.TestControl_Load);
            ((System.ComponentModel.ISupportInitialize)(this.meGustaPictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox meGustaPictureBox;
        private System.Windows.Forms.Label meGustaLabel;
        private System.Windows.Forms.Timer labelColorTimer;
    }
}
