import pygal
chart=pygal.Pie()
chart.title="Yashit pagal hai?"
chart.add('Yes', 99)
chart.add('No', 1)
chart.render_in_browser()
