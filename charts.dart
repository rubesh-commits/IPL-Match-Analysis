import 'package:fl_chart/fl_chart.dart';
import 'package:flutter/material.dart';

class BarChartWidget extends StatelessWidget {

  final Map<String, dynamic> data;
  final String title;
  final Color color;

  const BarChartWidget({

    super.key,

    required this.data,
    required this.title,
    required this.color,
  });

  @override
  Widget build(BuildContext context) {

    final entries = data.entries.toList();

    return Scaffold(

      appBar: AppBar(
        title: Text(title),
      ),

      body: Padding(

        padding: const EdgeInsets.all(20),

        child: BarChart(

          BarChartData(

            alignment: BarChartAlignment.spaceAround,

            maxY: entries
                    .map((e) => e.value.toDouble())
                    .reduce((a, b) => a > b ? a : b) +
                11,

            titlesData: FlTitlesData(

              leftTitles: AxisTitles(
                sideTitles: SideTitles(showTitles: false),
              ),

              bottomTitles: AxisTitles(

                sideTitles: SideTitles(

                  showTitles: true,

                  getTitlesWidget: (value, meta) {

                    if (value.toInt() >= entries.length) {
                      return const Text("");
                    }

                    return Padding(

                      padding: const EdgeInsets.only(top: 8),

                      child: Text(

                        entries[value.toInt()].key,

                        style: const TextStyle(fontSize: 12),
                      ),
                    );
                  },
                ),
              ),
            ),

            borderData: FlBorderData(show: false),

            barGroups: List.generate(

              entries.length,

              (index) {

                final value = entries[index].value;

                return BarChartGroupData(

                  x: index,

                  barRods: [

                    BarChartRodData(
                      toY: value.toDouble(),
                      width: 18,
                      color: color,
                      borderRadius: BorderRadius.circular(6),
                    ),
                  ],
                );
              },
            ),
          ),
        ),
      ),
    );
  }
}