using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Input;
using System.Windows.Markup;

namespace iRemovalProWPF;

public partial class MainWindow : Window, IComponentConnector
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CButton_Click_5_003Ed__21 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		private void MoveNext()
		{
			try
			{
				Library.Action(9);
			}
			catch (Exception ex)
			{
				_003C_003E1__state = -2;
				C8BFB49E._81BBAF2C[64](ref _003C_003Et__builder, ex);
				return;
			}
			_003C_003E1__state = -2;
			C8BFB49E._81BBAF2C[6](ref _003C_003Et__builder);
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			C8BFB49E._81BBAF2C[3](ref _003C_003Et__builder, stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CImei_MouseDown_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public MouseButtonEventArgs e;

		private void MoveNext()
		{
			try
			{
				if (C8BFB49E._81BBAF2C[10](e) == MouseButtonState.Pressed)
				{
					Library.Action(6);
				}
			}
			catch (Exception ex)
			{
				_003C_003E1__state = -2;
				C8BFB49E._81BBAF2C[64](ref _003C_003Et__builder, ex);
				return;
			}
			_003C_003E1__state = -2;
			C8BFB49E._81BBAF2C[6](ref _003C_003Et__builder);
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			C8BFB49E._81BBAF2C[3](ref _003C_003Et__builder, stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSn_MouseDown_003Ed__16 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public MouseButtonEventArgs e;

		private void MoveNext()
		{
			try
			{
				if (C8BFB49E._81BBAF2C[10](e) == MouseButtonState.Pressed)
				{
					Library.Action(5);
				}
			}
			catch (Exception ex)
			{
				_003C_003E1__state = -2;
				C8BFB49E._81BBAF2C[64](ref _003C_003Et__builder, ex);
				return;
			}
			_003C_003E1__state = -2;
			C8BFB49E._81BBAF2C[6](ref _003C_003Et__builder);
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			C8BFB49E._81BBAF2C[3](ref _003C_003Et__builder, stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private Library.FormCallback CallbackInstance;

	private GCHandle CallbackInstanceGC;

	private static MethodInfo _cache_UIElement_SetVisibility = null;

	private static MethodInfo _cache_ImageSource_SetSource = null;

	private static MethodInfo _cache_ImageSource_SetStretch = null;

	private static MethodInfo _cache_ContentControl_GetContent = null;

	private static MethodInfo _cache_ContentControl_SetContent = null;

	private static MethodInfo _cache_UIElement_SetIsEnabled = null;

	private static MethodInfo _cache_RangeBase_SetValue = null;

	private static BindingFlags BF = (BindingFlags)(-1);

	public MainWindow()
	{
		new C834A786()._3CB74B1B(new object[1] { this }, 147754);
	}

	private static string SearchManagement(string Key, string Group)
	{
		return (string)new C834A786()._3CB74B1B(new object[2] { Key, Group }, 132476);
	}

	private void Callback(int action, string key, string value)
	{
		new C834A786()._3CB74B1B(new object[4] { this, action, key, value }, 9436);
	}

	private void Button_Click(object sender, RoutedEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 21446);
	}

	private void Button_Click_1(object sender, RoutedEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 272778);
	}

	private void TopImage_MouseDown(object sender, MouseButtonEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 306378);
	}

	[AsyncStateMachine(typeof(_003CSn_MouseDown_003Ed__16))]
	private void Sn_MouseDown(object sender, MouseButtonEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 303767);
	}

	[AsyncStateMachine(typeof(_003CImei_MouseDown_003Ed__17))]
	private void Imei_MouseDown(object sender, MouseButtonEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 294559);
	}

	private void QrImage_MouseDown(object sender, MouseButtonEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 281357);
	}

	private void Activate_Click(object sender, RoutedEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 297829);
	}

	private void Erase_Click(object sender, RoutedEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 279625);
	}

	[AsyncStateMachine(typeof(_003CButton_Click_5_003Ed__21))]
	private void Button_Click_5(object sender, RoutedEventArgs e)
	{
		new C834A786()._3CB74B1B(new object[3] { this, sender, e }, 12448);
	}
}
