/*
 * commons.h
 *
 *  Created on: 09-10-2011
 *      Author: ghik
 */

#ifndef COMMONS_H_
#define COMMONS_H_

#include <cstdlib>
#include <gtk/gtk.h>
#include <cairo/cairo.h>

#define FARAWAY 2000

const double LINE_WIDTH = 1;
const double POINT_SIZE = 3;
const double FONT_SIZE = 14;
const char* const FONT_FACE = "URW Chancery L";
const double LABEL_OFFSET[2] = { 5, -5 };

double rad(double deg);
double dist(double x1, double y1, double x2, double y2);
void setColor(double* color, double r, double g, double b, double a);
void draw_grid(GtkWidget* widget, cairo_t* cr, int prec);
void start_draw(cairo_t* cr, double x, double y, double angle);
void end_draw(cairo_t *cr);
void put_label(cairo_t *cr, const char* label);
void draw_point(cairo_t* cr, double x, double y, const char* label = NULL);
void draw_line(cairo_t* cr, double x, double y, double angle,
		const char* label = NULL);
void draw_halfline(cairo_t* cr, double x, double y, double angle,
		const char* label = NULL);
void draw_segment(cairo_t* cr, double x1, double y1, double x2, double y2,
		const char* label = NULL);
void draw_circle(cairo_t* cr, double cx, double cy, double r,
		const char* label = NULL);
void draw_polyline(cairo_t* cr, double points[][2], int num_points);
void draw_polygon(cairo_t* cr, double points[][2], int num_points);

#endif /* COMMONS_H_ */