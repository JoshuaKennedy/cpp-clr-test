namespace CSharpHelper2
{
    partial class MainForm
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

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.infoButton = new System.Windows.Forms.Button();
            this.websiteLinkLabel = new System.Windows.Forms.LinkLabel();
            this.actionButton = new System.Windows.Forms.Button();
            this.randomTextLabel = new System.Windows.Forms.Label();
            this.pinvokeButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // infoButton
            // 
            this.infoButton.Cursor = System.Windows.Forms.Cursors.Hand;
            this.infoButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.infoButton.Location = new System.Drawing.Point(13, 227);
            this.infoButton.Name = "infoButton";
            this.infoButton.Size = new System.Drawing.Size(22, 23);
            this.infoButton.TabIndex = 0;
            this.infoButton.Text = "?";
            this.infoButton.UseVisualStyleBackColor = true;
            this.infoButton.Click += new System.EventHandler(this.infoButton_Click);
            // 
            // websiteLinkLabel
            // 
            this.websiteLinkLabel.AutoSize = true;
            this.websiteLinkLabel.Location = new System.Drawing.Point(293, 240);
            this.websiteLinkLabel.Name = "websiteLinkLabel";
            this.websiteLinkLabel.Size = new System.Drawing.Size(172, 13);
            this.websiteLinkLabel.TabIndex = 1;
            this.websiteLinkLabel.TabStop = true;
            this.websiteLinkLabel.Text = "http://www.joshuakennedy.co.cc/";
            this.websiteLinkLabel.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.websiteLinkLabel_LinkClicked);
            // 
            // actionButton
            // 
            this.actionButton.Location = new System.Drawing.Point(169, 113);
            this.actionButton.Name = "actionButton";
            this.actionButton.Size = new System.Drawing.Size(131, 23);
            this.actionButton.TabIndex = 2;
            this.actionButton.Text = "Click Me!";
            this.actionButton.UseVisualStyleBackColor = true;
            this.actionButton.Click += new System.EventHandler(this.actionButton_Click);
            // 
            // randomTextLabel
            // 
            this.randomTextLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.randomTextLabel.Location = new System.Drawing.Point(12, 79);
            this.randomTextLabel.Name = "randomTextLabel";
            this.randomTextLabel.Size = new System.Drawing.Size(453, 18);
            this.randomTextLabel.TabIndex = 3;
            this.randomTextLabel.Text = "Click the button.";
            this.randomTextLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // pinvokeButton
            // 
            this.pinvokeButton.Location = new System.Drawing.Point(169, 142);
            this.pinvokeButton.Name = "pinvokeButton";
            this.pinvokeButton.Size = new System.Drawing.Size(131, 23);
            this.pinvokeButton.TabIndex = 4;
            this.pinvokeButton.Text = "P/Invoke Test";
            this.pinvokeButton.UseVisualStyleBackColor = true;
            this.pinvokeButton.Click += new System.EventHandler(this.pinvokeButton_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(477, 262);
            this.Controls.Add(this.pinvokeButton);
            this.Controls.Add(this.randomTextLabel);
            this.Controls.Add(this.actionButton);
            this.Controls.Add(this.websiteLinkLabel);
            this.Controls.Add(this.infoButton);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Name = "MainForm";
            this.Text = "Test #3";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button infoButton;
        private System.Windows.Forms.LinkLabel websiteLinkLabel;
        private System.Windows.Forms.Button actionButton;
        private System.Windows.Forms.Label randomTextLabel;
        private System.Windows.Forms.Button pinvokeButton;
    }
}