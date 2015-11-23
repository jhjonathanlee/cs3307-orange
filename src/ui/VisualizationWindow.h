#ifndef VISUALIZATIONWINDOW_H
#define VISUALIZATIONWINDOW_H

#include <QDialog>
#include <QList>

#include "ui_VisualizationWindow.h"
#include "../records/PresentationRecord.h"

class VisualizationWindow : public QDialog {
	Q_OBJECT

public:
    VisualizationWindow(const QList<QMap<QString, double>> &plotData, const QList<QString> &plotNames,
						const QString &memberName, const QDate &startDate, const QDate &endDate);

private slots:
    void on_barGraph_button_clicked();

    void on_scatter_button_clicked();

    void on_printButton_clicked();

private:
	void drawBarGraph();
    void drawScatterPlot();
    void clearVis();        // clears all bars/graphs from the visualization
	
	Ui::VisualizationWindow ui;
	
	QList<QMap<QString, double>> plotData;
	QList<QString> plotNames;
	
	QString memberName;
	QDate startDate;
	QDate endDate;
};

#endif
