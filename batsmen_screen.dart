import 'package:flutter/material.dart';
import 'api_service.dart';
import 'charts.dart';
import 'app_bg.dart';

class BatsmenScreen extends StatefulWidget {

  const BatsmenScreen({super.key});

  @override
  State<BatsmenScreen> createState() => _BatsmenScreenState();
}

class _BatsmenScreenState extends State<BatsmenScreen> {

  Map<String, String> playerImages = {

    "V Kohli":
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/2.png",

    "RG Sharma":
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/6.png",

    "S Dhawan":
    "https://documents.iplt20.com/ipl/IPLHeadshot2024/11.png",

    "DA Warner":
    "https://documents.iplt20.com/ipl/IPLHeadshot2024/214.png",

    "SK Raina":
    "https://documents.iplt20.com/playerheadshot/ipl/284/14.png",

    "MS Dhoni":
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/57.png",

    "KL Rahul":
    "https://documents.iplt20.com/ipl/IPLHeadshot2025/19.png",

    "AM Rahane":
    "https://documents.iplt20.com/ipl/IPLHeadshot2026/44.png",

    "AB de Villiers":
    "https://documents.iplt20.com/playerheadshot/ipl/284/233.png",

    "CH Gayle":
    "https://documents.iplt20.com/playerheadshot/ipl/284/236.png",
  };

  Map<String, dynamic> batsmen = {};

  bool isLoading = true;

  @override
  void initState() {
    super.initState();
    fetchData();
  }

  Future<void> fetchData() async {

    final data = await ApiService.getTopBatsmen();

    setState(() {
      batsmen = data;
      isLoading = false;
    });
  }

  @override
  Widget build(BuildContext context) {

    return Scaffold(

      backgroundColor: Colors.transparent,

      appBar: AppBar(

        elevation: 0,

        backgroundColor: Colors.deepPurple,

        centerTitle: true,

        title: const Text(
          "Top Batsmen",

          style: TextStyle(
            fontWeight: FontWeight.bold,
            color: Colors.white,
          ),
        ),
      ),

      body: AppBackground(

        child: isLoading

            ? const Center(
                child: CircularProgressIndicator(),
              )

            : ListView(
                padding: const EdgeInsets.all(10),

                children: batsmen.entries.map((entry) {

                  return Card(

                    margin: const EdgeInsets.symmetric(
                      horizontal: 8,
                      vertical: 8,
                    ),

                    elevation: 5,

                    shadowColor: Colors.black26,

                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(18),
                    ),

                    child: ListTile(

                      contentPadding: const EdgeInsets.symmetric(
                        horizontal: 15,
                        vertical: 10,
                      ),

                      leading: CircleAvatar(

                        radius: 28,

                        backgroundColor: Colors.grey.shade200,

                        backgroundImage:
                            playerImages[entry.key] != null

                            ? NetworkImage(playerImages[entry.key]!)

                            : null,

                        child: playerImages[entry.key] == null
                            ? const Icon(Icons.person)
                            : null,
                      ),

                      title: Text(

                        entry.key,

                        style: const TextStyle(
                          fontWeight: FontWeight.bold,
                          fontSize: 16,
                        ),
                      ),

                      subtitle: const Text(
                        "IPL Batsman",
                        style: TextStyle(
                          color: Colors.grey,
                        ),
                      ),

                      trailing: Container(

                        padding: const EdgeInsets.symmetric(
                          horizontal: 14,
                          vertical: 10,
                        ),

                        decoration: BoxDecoration(

                          gradient: LinearGradient(
                            colors: [
                              Colors.orange.shade300,
                              Colors.orange.shade600,
                            ],
                          ),

                          borderRadius: BorderRadius.circular(14),
                        ),

                        child: Text(

                          entry.value.toString(),

                          style: const TextStyle(
                            color: Colors.white,
                            fontWeight: FontWeight.bold,
                            fontSize: 15,
                          ),
                        ),
                      ),
                    ),
                  );

                }).toList(),
              ),
      ),

      floatingActionButton: FloatingActionButton(

        backgroundColor: Colors.deepPurple,

        child: const Icon(
          Icons.bar_chart,
          color: Colors.white,
        ),

        onPressed: () {

          Navigator.push(

            context,

            MaterialPageRoute(

              builder: (_) => BarChartWidget(

                data: batsmen,

                title: "Top Batsmen Chart",

                color: Colors.orange,
              ),
            ),
          );
        },
      ),
    );
  }
}