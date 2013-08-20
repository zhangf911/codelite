//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef PROJECT_SETTINGS_BASE_CLASSES_H
#define PROJECT_SETTINGS_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/treebook.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/statline.h>
#include <wx/statbox.h>
#include <wx/notebook.h>
#include <wx/imaglist.h>
#include <wx/dataview.h>
#include <wx/listctrl.h>
#include <wx/splitter.h>

class ProjectSettingsBaseDlg : public wxDialog
{
protected:
    wxPanel* m_panelSettings;
    wxChoice* m_choiceConfig;
    wxTreebook* m_treebook;
    wxButton* m_buttonHelp;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;
    wxButton* m_buttonApply;

protected:
    virtual void OnConfigurationChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonHelp(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonApplyUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    ProjectSettingsBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Project Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ProjectSettingsBaseDlg();
};


class PSGeneralPageBase : public wxPanel
{
protected:
    wxPanel* m_generalPage;
    wxStaticText* m_staticText22;
    wxChoice* m_choiceProjectTypes;
    wxStaticText* m_staticText191;
    wxChoice* m_choiceCompilerType;
    wxStaticText* m_staticText231;
    wxChoice* m_choiceDebugger;
    wxStaticText* m_staticText15;
    wxTextCtrl* m_textOutputFilePicker;
    wxStaticText* m_staticText16;
    wxTextCtrl* m_textCtrlItermediateDir;
    wxButton* m_buttonBrowseIM_WD;
    wxStaticText* m_staticText17;
    wxStaticText* m_staticText18;
    wxTextCtrl* m_textCommand;
    wxButton* m_buttonBrowseProgram;
    wxStaticText* m_staticText20;
    wxTextCtrl* m_textCtrlCommandWD;
    wxButton* m_buttonBrowseCommandWD;
    wxStaticText* m_staticText19;
    wxTextCtrl* m_textCommandArguments;
    wxCheckBox* m_checkBoxUseDebugArgs;
    wxStaticText* m_staticText44;
    wxTextCtrl* m_textCtrlDebugArgs;
    wxStaticLine* m_staticline11;
    wxCheckBox* m_checkBoxPauseWhenExecEnds;

protected:
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseIntermediateDir(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseProgram(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseCommandWD(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUseDebugArgsUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    PSGeneralPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSGeneralPageBase();
};


class PSCompilerPageBase : public wxPanel
{
protected:
    wxPanel* m_compilerPage;
    wxCheckBox* m_checkCompilerNeeded;
    wxStaticText* m_staticText331;
    wxChoice* m_choiceCmpUseWithGlobalSettings;
    wxStaticText* m_staticText6;
    wxTextCtrl* m_textCompilerOptions;
    wxButton* m_buttonCompilerOptions;
    wxStaticText* m_staticText45;
    wxTextCtrl* m_textCtrlCCompilerOptions;
    wxButton* m_button35;
    wxStaticText* m_staticText94;
    wxTextCtrl* m_textCtrlAssemblerOptions;
    wxButton* m_button98;
    wxStaticText* m_staticText4;
    wxTextCtrl* m_textAdditionalSearchPath;
    wxButton* m_buttonAddSearchPath;
    wxStaticText* m_staticText171;
    wxTextCtrl* m_textPreprocessor;
    wxButton* m_buttonAddPreprocessor;
    wxTextCtrl* m_textCtrlPreCompiledHeader;
    wxButton* m_buttonBrowsePreCompiledHeader;
    wxCheckBox* m_checkBoxPCHInCommandLine;
    wxCheckBox* m_checkBoxSeparatePCHFlags;
    wxTextCtrl* m_textCtrlPCHCompilationFlags;

protected:
    virtual void OnCheckCompilerNeeded(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCompiledNotNeededUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddCompilerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddCCompilerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddAssemblerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddPreprocessor(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowsePreCmpHeader(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEnablePCHFLagsUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    PSCompilerPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCompilerPageBase();
};


class PSLinkPageBase : public wxPanel
{
protected:
    wxPanel* m_linkerPage;
    wxCheckBox* m_checkLinkerNeeded;
    wxStaticText* m_staticText3311;
    wxChoice* m_choiceLnkUseWithGlobalSettings;
    wxStaticText* m_staticText10;
    wxTextCtrl* m_textLinkerOptions;
    wxButton* m_buttonLinkerOptions;
    wxStaticText* m_staticText7;
    wxTextCtrl* m_textLibraryPath;
    wxButton* m_buttonLibraryPath;
    wxStaticText* m_staticText8;
    wxTextCtrl* m_textLibraries;
    wxButton* m_buttonLibraries;

protected:
    virtual void OnCheckLinkerNeeded(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnLinkerNotNeededUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddLinkerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddLibraryPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddLibrary(wxCommandEvent& event) { event.Skip(); }

public:
    PSLinkPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSLinkPageBase();
};


class PSDebuggerPageBase : public wxPanel
{
protected:
    wxPanel* m_panelDebugger;
    wxStaticText* m_staticText321;
    wxTextCtrl* m_textCtrlDebuggerPath;
    wxButton* m_button39;
    wxNotebook* m_notebook67;
    wxPanel* m_panel80;
    wxDataViewListCtrl* m_dvListCtrlDebuggerSearchPaths;
    wxButton* m_button88;
    wxButton* m_button90;
    wxPanel* m_panel71;
    wxStaticText* m_staticText301;
    wxTextCtrl* m_textCtrlDbgCmds;
    wxPanel* m_panel74;
    wxStaticText* m_staticText311;
    wxTextCtrl* m_textCtrlDbgPostConnectCmds;
    wxCheckBox* m_checkBoxDbgRemote;
    wxStaticText* m_staticText31;
    wxTextCtrl* m_textCtrl1DbgHost;
    wxStaticText* m_staticText32;
    wxTextCtrl* m_textCtrlDbgPort;

protected:
    virtual void OnBrowseForDebuggerPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnAddDebuggerSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteDebuggerSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteDebuggerSearchPathUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoteDebugUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    PSDebuggerPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSDebuggerPageBase();
};


class PSResourcesPageBase : public wxPanel
{
protected:
    wxPanel* m_resourceCmpPage;
    wxStaticText* m_staticText33111;
    wxChoice* m_choiceResUseWithGlobalSettings;
    wxStaticText* m_staticText221;
    wxTextCtrl* m_textAddResCmpOptions;
    wxButton* m_buttonAddResCmpOptions;
    wxStaticText* m_staticText23;
    wxTextCtrl* m_textAddResCmpPath;
    wxButton* m_buttonAddResCmpPath;

protected:
    virtual void OnrResourceCompilerNotNeededUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnResourceCmpAddOption(wxCommandEvent& event) { event.Skip(); }
    virtual void OnResourceCmpAddPath(wxCommandEvent& event) { event.Skip(); }

public:
    PSResourcesPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSResourcesPageBase();
};


class PSEnvironmentBasePage : public wxPanel
{
protected:
    wxPanel* m_panelEnv;
    wxStaticText* m_staticText44;
    wxChoice* m_choiceEnv;
    wxStaticText* m_staticText45;
    wxChoice* m_choiceDbgEnv;
    wxStaticLine* m_staticline12;
    wxStaticText* m_staticText47;
    wxTextCtrl* m_textCtrlEnvvars;

protected:
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }

public:
    PSEnvironmentBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSEnvironmentBasePage();
};


class PSBuildEventsBasePage : public wxPanel
{
protected:
    wxPanel* m_preBuildPage;
    wxStaticText* m_staticText11;
    wxTextCtrl* m_textCtrlBuildEvents;

protected:

public:
    PSBuildEventsBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSBuildEventsBasePage();
};


class PSCustomBuildBasePage : public wxPanel
{
protected:
    wxPanel* m_customBuildPage;
    wxCheckBox* m_checkEnableCustomBuild;
    wxStaticLine* m_staticline12;
    wxStaticText* m_staticText33;
    wxTextCtrl* m_textCtrlCustomBuildWD;
    wxButton* m_buttonBrowseCustomBuildWD;
    wxListCtrl* m_listCtrlTargets;
    wxButton* m_buttonNewCustomTarget;
    wxButton* m_buttonEditCustomTarget;
    wxButton* m_buttonDeleteCustomTarget;

protected:
    virtual void OnCustomBuildEnabled(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCustomBuildCBEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCustomBuildEnabledUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseCustomBuildWD(wxCommandEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxListEvent& event) { event.Skip(); }
    virtual void OnItemSelected(wxListEvent& event) { event.Skip(); }
    virtual void OnNewTarget(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditTarget(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEditTargetUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDeleteTarget(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteTargetUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    PSCustomBuildBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCustomBuildBasePage();
};


class GlobalSettingsBasePanel : public wxPanel
{
protected:
    wxNotebook* m_notebook;
    wxPanel* m_compilerPage;
    wxStaticText* m_staticText6;
    wxTextCtrl* m_textCompilerOptions;
    wxButton* m_buttonCompilerOptions;
    wxStaticText* m_staticText46;
    wxTextCtrl* m_textCtrlCCompileOptions;
    wxButton* m_buttonCCompileOptions;
    wxStaticText* m_staticText4;
    wxTextCtrl* m_textAdditionalSearchPath;
    wxButton* m_buttonAddSearchPath;
    wxStaticText* m_staticText171;
    wxTextCtrl* m_textPreprocessor;
    wxButton* m_buttonAddPreprocessor;
    wxPanel* m_linkerPage;
    wxStaticText* m_staticText10;
    wxTextCtrl* m_textLinkerOptions;
    wxButton* m_buttonLinkerOptions;
    wxStaticText* m_staticText7;
    wxTextCtrl* m_textLibraryPath;
    wxButton* m_buttonLibraryPath;
    wxStaticText* m_staticText8;
    wxTextCtrl* m_textLibraries;
    wxButton* m_buttonLibraries;
    wxPanel* m_resourceCmpPage;
    wxStaticText* m_staticText221;
    wxTextCtrl* m_textAddResCmpOptions;
    wxButton* m_buttonAddResCmpOptions;
    wxStaticText* m_staticText23;
    wxTextCtrl* m_textAddResCmpPath;
    wxButton* m_buttonAddResCmpPath;

protected:
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddCompilerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddCCompilerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddSearchPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddPreprocessor(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonAddLinkerOptions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddLibraryPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddLibrary(wxCommandEvent& event) { event.Skip(); }
    virtual void OnResourceCmpAddOption(wxCommandEvent& event) { event.Skip(); }
    virtual void OnResourceCmpAddPath(wxCommandEvent& event) { event.Skip(); }

public:
    GlobalSettingsBasePanel(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~GlobalSettingsBasePanel();
};


class PSCustomMakefileBasePage : public wxPanel
{
protected:
    wxPanel* m_customMakefileStep;
    wxStaticText* m_staticText25;
    wxTextCtrl* m_textDeps;
    wxStaticText* m_staticText26;
    wxTextCtrl* m_textPreBuildRule;
    wxStaticText* m_staticText24;

protected:
    virtual void OnProjectCustumBuildUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }

public:
    PSCustomMakefileBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCustomMakefileBasePage();
};


class PSCompletionBase : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter1;
    wxPanel* m_panel14;
    wxStaticText* m_staticText47;
    wxTextCtrl* m_textCtrlSearchPaths;
    wxPanel* m_panel15;
    wxStaticText* m_staticText49;
    wxTextCtrl* m_textCtrlMacros;
    wxCheckBox* m_checkBoxC11;

protected:
    virtual void OnCmdEvtVModified(wxCommandEvent& event) { event.Skip(); }

public:
    PSCompletionBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~PSCompletionBase();
};


class ProjectCustomBuildTragetDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticTextTargetName;
    wxTextCtrl* m_textCtrlTargetName;
    wxStaticText* m_staticTextCommand;
    wxTextCtrl* m_textCtrlCommand;
    wxButton* m_button49;
    wxButton* m_button51;

protected:
    virtual void OnEditTargetNameUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    ProjectCustomBuildTragetDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Build Target"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ProjectCustomBuildTragetDlgBase();
};

#endif
