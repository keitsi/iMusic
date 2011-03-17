#include "main.h"

static GtkWidget *main_window;

static void
destroy(GtkWidget *widget, gpointer data)
{
	gtk_main_quit();
}

int main(int argc, char *argv[])
{
	/* Initialise GTK+ */
	gtk_init(&argc, &argv);

	/* Create a window */
	main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	/* Set main window title */
	gtk_window_set_title(GTK_WINDOW(main_window), "iMusic");

	/* Connect the main window’s destroy handler */
	g_signal_connect(G_OBJECT(main_window), "destroy", 
			G_CALLBACK(destroy), NULL);

	/* Make everything visible */
	gtk_widget_show_all(GTK_WIDGET(main_window));

	/* Start the main loop */
	gtk_main();

	return 0;
}

