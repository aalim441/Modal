// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Modal.h"
#include "CSonDlg.h"
#include "afxdialogex.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_a(0)
	, m_b(0)
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_a);
	DDX_Text(pDX, IDC_EDIT2, m_b);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSonDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CSonDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CSonDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CSonDlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기

#include "ModalDlg.h"
void CSonDlg::OnBnClickedButton1()
{
	UpdateData(true);
	CModalDlg* dlg = (CModalDlg*)GetParent();
	int m_c = m_a + m_b;
	CString c;
	c.Format(_T("%d"), m_c);
	dlg->m_List.AddString(c);
	UpdateData(false);
}


void CSonDlg::OnBnClickedButton2()
{
	UpdateData(true);
	CModalDlg* dlg = (CModalDlg*)GetParent();
	int m_c = m_a - m_b;
	CString c;
	c.Format(_T("%d"), m_c);
	dlg->m_List.AddString(c);
	UpdateData(false);
}


void CSonDlg::OnBnClickedButton3()
{
	UpdateData(true);
	CModalDlg* dlg = (CModalDlg*)GetParent();
	int m_c = m_a * m_b;
	CString c;
	c.Format(_T("%d"), m_c);
	dlg->m_List.AddString(c);
	UpdateData(false);
}


void CSonDlg::OnBnClickedButton4()
{
	UpdateData(true);
	CModalDlg* dlg = (CModalDlg*)GetParent();
	int m_c = m_a / m_b;
	CString c;
	c.Format(_T("%d"), m_c);
	dlg->m_List.AddString(c);
	UpdateData(false);
}
