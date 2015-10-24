#ifndef FILEINPUTDIALOG_H
#define FILEINPUTDIALOG_H

#include <QString>
#include <QDialog>

#include "ui_FileInputDialog.h"

enum SubjectArea {
	None, Publications, Presentation, Grants, Teaching
};

class FileInputDialog : public QDialog {
	Q_OBJECT

 public:
	explicit FileInputDialog(QWidget *parent = nullptr);
	
	QString getFilename();
	SubjectArea getSubjectArea();
	
 private slots:
	void on_okCancelButtons_accepted();
	void on_okCancelButtons_rejected();
	
	void on_publicationsButton_clicked();
	void on_presentationButton_clicked();
	void on_grantsButton_clicked();
	void on_teachingButton_clicked();
	
	void on_browseButton_clicked();

 private:
	Ui::FileInputDialog ui;
	
	QString filename;
	SubjectArea subjectArea = None;
};

#endif
